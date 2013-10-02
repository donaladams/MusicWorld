
#include <vector>
#include <memory>

#include "MajorTriad.hpp"
#include "Interval.hpp"
#include "IntervalFactory.hpp"
#include "Chord.hpp"

namespace Music
{
    MajorTriad::MajorTriad(int root)
    {
        this->setRoot(root);
        this->setThird(root + IntervalFactory::GetInterval(MAJOR_THIRD));
        this->setFifth(root + IntervalFactory::GetInterval(PERFECT_FIFTH));
    }
    
    MajorTriad::~MajorTriad() {}
        
    // Returns the ChordType Enum value for and instance
    ChordType MajorTriad::getChordType() const
    {
        return CT_MajorTriad;
    }
}