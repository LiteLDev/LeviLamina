//Extra Part For RelativeFloat.hpp
#ifdef EXTRA_INCLUDE_PART_RELATIVEFLOAT
// Include Headers or Declare Types Here

#else
// Add Member There
public:
float value;
bool is_relative;

RelativeFloat(float value)
    : value(value)
    , is_relative(true) {
}

inline float getFloat(float center) const {
    if (is_relative)
        return center + value;
    return value;
}
#endif
