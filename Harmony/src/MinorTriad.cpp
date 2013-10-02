
#include <vector>
#include <memory>

#include "MinorTriad.hpp"
#include "Interval.hpp"
#include "IntervalFactory.hpp"
#include "Chord.hpp"

namespace Music
{
    MinorTriad::MinorTriad(int root)
    {
        this->setRoot(root);
        this->setThird(root + IntervalFactory::GetInterval(MINOR_THIRD));
        this->setFifth(root + IntervalFactory::GetInterval(PERFECT_FIFTH));
    }
    
    MinorTriad::~MinorTriad() {}
        
    // Returns the ChordType Enum value for and instance
    ChordType MinorTriad::getChordType() const
    {
        return CT_MinorTriad;
    }

}