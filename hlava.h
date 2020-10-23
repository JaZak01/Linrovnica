
#ifndef LINROVNICA_HLAVA_H
#define LINROVNICA_HLAVA_H

class Rovnica
        : public std::error_code {
private:
    float koefA;
    float koefB;
public:
    Rovnica();
    Rovnica(float mojeA,float mojeB);
    Rovnica(float mojKoef,char ktory='a');
    void vypisRovnicu() const;
    float vratKoren() const;

};




#endif //LINROVNICA_HLAVA_

