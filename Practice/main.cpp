#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <cassert>

using namespace std;

double ConvKilometersToMiles(double numKm) {
    double milesPerKm = 0.621371;
    return numKm * milesPerKm;
}

double ConvLitersToGallons(double numLiters) {
    double litersPerGal = 0.264172;
    return numLiters * litersPerGal;
}

double CalcMpg(double distMiles, double gasGallons) {
    cout << "FIXME: Calculate MPG" << endl;
    return 0.0;
}

int main() {
    double distKm;
    double distMiles;
    double gasLiters;
    double gasGal;
    double userMpg;
    
    cout << "Enter kilometers driven: " << endl;
    cin >> distKm;
    cout << "Enter liters of gas consumed: " << endl;
    cin >> gasLiters;
    
    distMiles = ConvKilometersToMiles(distKm);
    gasGal = ConvLitersToGallons(gasLiters);
    userMpg = CalcMpg(distMiles, gasGal);
    
    cout << "Miles driven: " << distMiles << endl;
    cout << "Gallons of gas: " << gasGal << endl;
    cout << "Mileage: " << userMpg << " mpg" << endl;
    
    return 0;
}

