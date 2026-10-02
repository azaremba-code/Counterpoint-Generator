#ifndef COUNTERPOINT_GENERATOR_MUSIC_PITCH_CLASS_HPP
#define COUNTERPOINT_GENERATOR_MUSIC_PITCH_CLASS_HPP

#include "music/Augmentation.hpp"
#include "music/Letter.hpp"

class PitchClass {
public:
    using Letter = unsigned char;
    
    constexpr explicit PitchClass() :
        letter_ {'A'}, augmentation_ {Augmentation::natural}
    {}

private:
    Letter letter_ {};
    Augmentation augmentation_ {};
};



#endif