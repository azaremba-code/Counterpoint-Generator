#ifndef COUNTERPOINT_GENERATOR_MUSIC_LETTER_HPP
#define COUNTERPOINT_GENERATOR_MUSIC_LETTER_HPP

#include <cassert>

#include "math/IntMod.hpp"

class Letter {
public:
    static constexpr inline int count {7};

    static const Letter A;
    static const Letter B;
    static const Letter C;
    static const Letter D;
    static const Letter E;
    static const Letter F;
    static const Letter G;

    int getLetterNumber(Letter referenceLetter = Letter::A) {
        IntMod<Letter::count> result {static_cast<int>(letter_ - referenceLetter.letter_)};
        return result.value();
    }

private:
    constexpr explicit Letter(unsigned char letter = 'A') :
        letter_ {letter}
    {
        assert('A' <= letter && letter <= 'G');
    }

    unsigned char letter_ {};
};

constexpr Letter Letter::A {'A'};
constexpr Letter Letter::B {'B'};
constexpr Letter Letter::C {'C'};
constexpr Letter Letter::D {'D'};
constexpr Letter Letter::E {'E'};
constexpr Letter Letter::F {'F'};
constexpr Letter Letter::G {'G'};

#endif