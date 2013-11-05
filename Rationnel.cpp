#include <iostream>

using namespace std;

#include "include/Rationnel.h"
//
//Constructeur
//

Rationnel::Rationnel() {
    _numerateur = 0;
    _denominateur = 1;
}

Rationnel::Rationnel(int numerateur = 0, int denominateur = 1) : _numerateur(numerateur), _denominateur(denominateur) { };
/*Equivalent à :
 *Rationnel::Rationnel(int numerateur = 0, int denominateur = 1){
 *  _numerateur = numerateur;
 *  _denominateur = denominateur;
 *}
 */

//
//Getter & Setter
//

        int Rationnel::getNumerateur() const{
            return this->_numerateur;
        }
        int Rationnel::getDenominateur() const{
            return this->_denominateur;
        }

        void Rationnel::setNumerateur(int numerateur){
            this->_numerateur = numerateur;
        }
        void Rationnel::setDenominateur(int denominateur){
            this->_denominateur = denominateur;
        }

//
//Surcharge Des Opérateurs
//
ostream& operator<< (ostream& os, const Rationnel& r2){
    os << r2.getNumerateur() << "/" << r2.getDenominateur();
}

Rationnel Rationnel::operator+ (const Rationnel& r2){
    int a = _numerateur;
    int b = _denominateur;
    int c = r2.getNumerateur();
    int d = r2.getDenominateur();

    return Rationnel(a*d + b*c, b*d);
}
