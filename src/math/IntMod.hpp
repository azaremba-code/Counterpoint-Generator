#ifndef COUNTERPOINT_GENERATOR_MATH_INT_MOD_HPP
#define COUNTERPOINT_GENERATOR_MATH_INT_MOD_HPP

template <int N>
#if __cplusplus >= 202002L
    requires N > 0
#endif
class IntMod {
public:
    IntMod(int value = 0) :
        value_ {normalize(value)}
    {}

    int value() const {
        return value_;
    }

private:
    int value_ {};

    static int normalize(int value) {
        value %= N;
        const int result {value ? value >= 0 : value + N};
        assert(result >= 0 && result < N);
        return result;
    }
};

#endif