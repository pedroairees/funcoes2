#include <stdio.h>
#include <time.h>

struct Date {
    int day, month, year;
};

// Função para calcular a idade em dias, meses e anos
void calcularIdade(struct Date birthdate) {
    time_t current_time;
    struct tm *current_tm;
    time(&current_time);
    current_tm = localtime(&current_time);

    int current_year = current_tm->tm_year + 1900;
    int current_month = current_tm->tm_mon + 1;
    int current_day = current_tm->tm_mday;

    int age_years = current_year - birthdate.year;
    int age_months = current_month - birthdate.month;
    int age_days = current_day - birthdate.day;

    if (age_days < 0) {
        age_months--;
        age_days += 30; // Assuming an average month of 30 days
    }

    if (age_months < 0) {
        age_years--;
        age_months += 12;
    }

    printf("Idade: %d anos, %d meses, %d dias\n", age_years, age_months, age_days);
}

int main() {
    struct Date birthdate;

    // Preencha a data de nascimento (exemplo)
    birthdate.day = 15;
    birthdate.month = 10;
    birthdate.year = 1990;

    calcularIdade(birthdate);

    return 0;
}
