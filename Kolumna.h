class Kolumna  
{  
public:  
    Kolumna(int numerKolumny, Talia& talia);      

    bool  czyMoznaDodac(const Karta& nowa, const Karta& naStosie) const; // klasyczne zasady pasjansa  
    void  dodajKarte(const Karta& nowa);  
    void  usunKartyOdIndexu(int index);  
    bool  czyMoznaZabrac(const Karta& zabierana) const;  
    int   rozmiar() const;
    bool  czyPusta() const;// Dodano metodê rozmiar()  

private:  
    std::vector<Karta> karty;  
};

}