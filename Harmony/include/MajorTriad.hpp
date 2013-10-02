#ifndef MAJOR_TRIAD_H
#define MAJOR_TRIAD_H

#include <vector>

#include "Triad.hpp"
#include "ChordType.hpp"

namespace Music
{

    class MajorTriad : public Triad
    {
    public:
        
        MajorTriad(int root);
        ~MajorTriad();
        
        // Returns the ChordType Enum value for and instance
        ChordType getChordType() const;
        
    };
}
#endif