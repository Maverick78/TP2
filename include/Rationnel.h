#ifndef RATIONNEL_H
#define RATIONNEL_H


class Rationnel
{
    public:
        Rationnel();
        Rationnel(int, int);

        //Getter & Setter.

        int getNumerateur() const;
        int getDenominateur() const;

        void setNumerateur(int);
        void setDenominateur(int);

        //Fonction de Surcharge
        Rationnel operator+ (const Rationnel&);

    private:
        int _numerateur;
        int _denominateur;
};

ostream& operator<< (ostream&, const Rationnel&);

#endif // RATIONNEL_H
