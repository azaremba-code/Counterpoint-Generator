#ifndef COUNTERPOINT_GENERATOR_MUSIC_AUGMENTATION_HPP
#define COUNTERPOINT_GENERATOR_MUSIC_AUGMENTATION_HPP

class Augmentation
{
public:
    constexpr explicit Augmentation(int augmentationNumber = 0) : 
        augmentationNumber_ {augmentationNumber} 
    {}

    static const Augmentation doubleFlat;
    static const Augmentation flat;
    static const Augmentation natural;
    static const Augmentation sharp;
    static const Augmentation doubleSharp;

private:
    int augmentationNumber_ {};
};

constexpr Augmentation Augmentation::doubleFlat {-2};
constexpr Augmentation Augmentation::flat {-1};
constexpr Augmentation Augmentation::natural {0};
constexpr Augmentation Augmentation::sharp {1};
constexpr Augmentation Augmentation::doubleSharp {2};

#endif