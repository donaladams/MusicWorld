#ifndef CHORD_H
#define CHORD_H

#include <vector>
#include <memory>

#include "ChordType.hpp"

namespace Music
{

    //--------------------------------------
    // Abstract base class for Chords
    //--------------------------------------
    class Chord
    {
    
    public:
        // Virtual Destructor
        virtual ~Chord() = 0;   
        
        // Returns the pitch classes [0-11] making up the 
        virtual void getPitchClasses(std::vector<int> & pitchesOut) const = 0;
        
        // Returns the root of the chord
        virtual int getRootPitchClass() const = 0;
        
        // Returns the ChordType Enum value for and instance
        virtual ChordType getChordType() const = 0;
        
    };
    
    inline Chord::~Chord(){};

}

#endif