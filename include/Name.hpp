#ifndef NAME_H
#define NAME_H

#include "Parts.hpp"

class Name
{
    public:
        Name(Prefix* Pref, Stem* Stem, Suffix* Suffix, Termination* Term)
        {
            _Prefix = Pref;
            _Stem = Stem;
            _Suffix = Suffix;
            _Term = Term;
        }
        Name()
        {
            //Name(nullptr, nullptr, nullptr, nullptr);
        }
        //virtual ~Name();

        std::string GetName();

        void MakeMoreHarsh();
        void MakeMoreLyric();

    private:
        Prefix*  _Prefix;
        Stem*    _Stem;
        Suffix*  _Suffix;
        Termination* _Term;

        std::string name;
};

#endif // NAME_H
