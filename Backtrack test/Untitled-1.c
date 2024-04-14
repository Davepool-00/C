#include <stdio.h>

#define STOCKS_COUNT 20
#define PORTFOLIO_SIZE 5

void generate_portfolios(char *stocks[], int portfolio_size, char *current_portfolio[], int index);

//!! Function to calculate nCr using the combination formula
int calculate_combinations(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return calculate_combinations(n - 1, r - 1) + calculate_combinations(n - 1, r);
    }
}

int main() {
    char *stocks[STOCKS_COUNT] = {"Stock1", "Stock2", "Stock3", "Stock4", "Stock5", "Stock6", "Stock7", "Stock8", "Stock9", "Stock10",
                                  "Stock11", "Stock12", "Stock13", "Stock14", "Stock15", "Stock16", "Stock17", "Stock18", "Stock19", "Stock20"};

    char *current_portfolio[PORTFOLIO_SIZE];

    printf("Possible portfolios:\n");
    generate_portfolios(stocks, PORTFOLIO_SIZE, current_portfolio, 0);

    return 0;
}

void generate_portfolios(char *stocks[], int portfolio_size, char *current_portfolio[], int index) {
    if (portfolio_size == 0) {
        //! Calculate and print the number of arrangements for the current portfolio
        int num_arrangements = calculate_combinations(PORTFOLIO_SIZE, PORTFOLIO_SIZE);
        printf("Portfolio: { ");
        for (int i = 0; i < PORTFOLIO_SIZE; i++) {
            printf("%s ", current_portfolio[i]);
        }
        printf("}, Arrangements: %d\n", num_arrangements);
        return;
    }

    if (index == STOCKS_COUNT) {
        return;
    }

    //!! current stock in the portfolio
    current_portfolio[PORTFOLIO_SIZE - portfolio_size] = stocks[index];
    generate_portfolios(stocks, portfolio_size - 1, current_portfolio, index + 1);

    //! Exclude the current stock from the portfolio
    generate_portfolios(stocks, portfolio_size, current_portfolio, index + 1);
}
