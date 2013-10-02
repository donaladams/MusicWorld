#ifndef TRIAD_H
#define TRIAD_H

#include <vector>

#include "Chord.hpp"
#include "ChordType.hpp"

namespace Music
{
    class Triad : public Chord
    {
    public:
        virtual ~Triad();
        
        // Returns the pitch classes [0-11] making up the 
        virtual void getPitchClasses(std::vector<int> & pitchesOut) const
        {
            pitchesOut.resize(3);
            pitchesOut[0] = this->getRoot();
            pitchesOut[1] = this->getThird();
            pitchesOut[2] = this->getFifth(); 
        }
                
        // Returns the ChordType Enum value for and instance
        virtual ChordType getChordType() const = 0;
        
        
                // Returns the root of the chord
        inline int getRootPitchClass() const
        {
            return this->getRoot();
        };
        
        inline int getRoot() const
        {
            return root_;
        }
        
        inline int getThird() const
        {
            return third_;
        }
        
        inline int getFifth() const
        {            
            return fifth_;
        }
        
    protected:
        inline void setRoot(int value) 
        {
            root_ = value;
        }
        
        inline void setThird(int value)
        {
            third_ = value;
        }
        
        inline void setFifth(int value)
        {
            fifth_ = value;
        }

    protected:
        int root_;
        int third_;
        int fifth_;                

    };

    // Necessary implementation of Pure Virtual Destructor
    inline Triad::~Triad(){};
    
}

#endif