
#include <vector>
#include <memory>
#include <iostream>

#include "ChordFactory.hpp"
#include "Chord.hpp"
#include "ChordType.hpp"

using namespace Music;

int main()
{
    ChordFactory factory;
    
    // create a major chord
    std::shared_ptr<Chord> majorThird(factory.create(CT_MajorTriad, 0));
    
    // create a major chord
    std::shared_ptr<Chord> minorThird(factory.create(CT_MinorTriad, 0));
    
    // retrieve the pitch classes
    std::vector<int> pitches;
    majorThird->getPitchClasses(pitches);
    
    std::cout << "Major chord has pitch classes: " << pitches[0] << ", " << pitches[1] << ", " << pitches[2] << std::endl;
    

     // retrieve the pitch classes
    std::vector<int> minorPitches;
    minorThird->getPitchClasses(minorPitches);
    
    std::cout << "Minor chord has pitch classes: " << minorPitches[0] << ", " << minorPitches[1] << ", " << minorPitches[2] << std::endl;
}