#ifndef __MyPart_H__
#define __MyPart_H__

#include "TObject.h"
#include "TLorentzVector.h"

class MyPart : public TObject {

  public :
    MyPart();
    virtual ~MyPart();
    
    virtual void Reset();
    virtual void Print();

    Double_t       charge;
    TLorentzVector v;

    TLorentzVector vmpi();
    virtual Bool_t operator< ( const MyPart& );
    
  private:

    ClassDef (MyPart,1)
};



#endif


