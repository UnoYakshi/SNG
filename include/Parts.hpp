#ifndef PARTS_H
#define PARTS_H

#include <vector>
#include <string>

typedef unsigned int uint;

/// Forward declaration...
struct Prefix;
struct Stem;
struct Interact;
struct Suffix;
struct Termination;


enum Terms
{
    NONE = 0,
    O    = 1,
    OV   = 2,
    A    = 4,
    AYA  = 8
};

/// Base struct for word Parts...
struct Part
{
    std::string Data;
};


struct Prefix : Part
{
    std::vector< Stem* > AvailableStems;
};
struct Stem : Part
{
    bool canHavePrefix = 0;
    bool canHaveExtraStem = 0;  // False iff AvaiablePrevInteracts, AvaiablePostInteracts are empty...

    std::vector< Interact* > AvaiablePrevInteracts;
    std::vector< Interact* > AvaiablePostInteracts;

    std::vector< Termination* > AvaiableMaleTerms;
    std::vector< Termination* > AvaiableFemaleTerms;
};
struct Interact : Part
{
    /// A transition between two stems...
};
struct Suffix : Part
{

};
struct Termination : Part
{
    uint bIsFemale : 1;
    uint bIsMale : 1;

    std::vector< Stem* > AvaiableAfterStems;
};

#endif // PARTS_H
