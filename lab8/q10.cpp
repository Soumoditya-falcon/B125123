
#include <iostream>
#include <iomanip>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(
        int userRating, int popularity) {
        return 0;
    }

    virtual ~Recommender() {}
};

class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(
        int userRating, int popularity) override {

        return 0.7 * userRating + 0.3 * popularity;
    }
};

class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(
        int userRating, int popularity) override {

        return 0.3 * userRating + 0.7 * popularity;
    }
};

int main() {
    int userRating, popularity;

    cout << "Enter user rating (0-100): ";
    cin >> userRating;

    cout << "Enter popularity (0-100): ";
    cin >> popularity;

    if (userRating < 0 || userRating > 100 ||
        popularity < 0 || popularity > 100) {
        cout << "Invalid input. Scores must be 0-100.";
        return 1;
    }

    PersonalizedRecommender personalized;
    TrendingRecommender trending;

    Recommender* ptr;

    cout << fixed << setprecision(2);

    ptr = &personalized;
    cout << "Personalized recommendation score: "
         << ptr->generateRecommendation(
                userRating, popularity) << endl;

    ptr = &trending;
    cout << "Trending recommendation score: "
         << ptr->generateRecommendation(
                userRating, popularity) << endl;

    return 0;
}
