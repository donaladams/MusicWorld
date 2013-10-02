#ifndef MINOR_TRIAD_H
#define MINOR_TRIAD_H

#include <vector>

#include "Triad.hpp"
#include "ChordType.hpp"

namespace Music
{
    class MinorTriad : public Triad
    {        
    public:        
        MinorTriad(int root);
        ~MinorTriad();
        
        // Returns the ChordType Enum value for and instance
        ChordType getChordType() const;
    };
}

#endif