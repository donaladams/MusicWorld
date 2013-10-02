#ifndef CHORD_FACTORY_H
#define CHORD_FACTORY_H

#include <memory>
#include <cassert>

#include "Chord.hpp"
#include "ChordType.hpp"
#include "MajorTriad.hpp"
#include "MinorTriad.hpp"

namespace Music
{
    class ChordFactory
    {
    public:
        // Factory method
        inline Chord * create(ChordType chordType, int root)
        {
            switch(chordType)
            {
                case CT_MajorTriad:
                    return new MajorTriad(root);
                case CT_MinorTriad:
                    return new MinorTriad(root);
                default:
                    assert(false);
            }
            
            return new MajorTriad(root);
        }
    };

}

#endif