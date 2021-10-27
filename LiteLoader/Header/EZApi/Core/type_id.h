#pragma once

template <typename T>
class typeid_t {
public:
    short value;

    typeid_t(typeid_t const& id)
        : value(id.value) {
    }
    typeid_t(short value)
        : value(value) {
    }
};