#ifndef INTERVAL_FACTORY_H
#define INTERVAL_FACTORY_H

#include <cassert>
#include "Interval.hpp"

namespace Music
{

    class IntervalFactory
    {
        public:
            inline static int GetInterval(Interval intervalType)
            {
                switch(intervalType)
                {
                    case UNISON:
                        return 0;
                    case MINOR_SECOND:
                        return 1;
                    case MAJOR_SECOND:
                        return 2;
                    case MINOR_THIRD:
                        return 3;
                    case MAJOR_THIRD:
                        return 4;
                    case PERFECT_FOURTH:
                        return 5;
                    case TRITONE:
                        return 6;
                    case PERFECT_FIFTH:
                        return 7;
                    case MINOR_SIXTH:
                        return 8;
                    case MAJOR_SIXTH:
                        return 9;
                    case MINOR_SEVENTH:
                        return 10;
                    case MAJOR_SEVENTH:
                        return 11;
                    case OCTAVE:
                        return 12;
                    default:
                        assert(false);
                        
                }
            }
    };

}

#endif