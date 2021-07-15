#pragma once

class RelativeFloat {
  public:
    float value;
    bool is_relative;

    RelativeFloat(float value) : value(value), is_relative(true) {}

    inline float getFloat(float center) const {
        if (is_relative)
            return center + value;
        return value;
    }
};
