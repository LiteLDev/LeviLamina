#include "mc/nbt/Tag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/ListTag.h"

Tag& Tag::operator[](size_t index) {

    if (getId() != Type::List) {
        throw std::runtime_error("Not a ListTag");
    }

    return *((ListTag*)this)->mList[index];
}
Tag const& Tag::operator[](size_t index) const {

    if (getId() != Type::List) {
        throw std::runtime_error("Not a ListTag");
    }

    return *((ListTag const*)this)->mList[index];
}
Tag& Tag::operator[](std::string_view index) {

    if (getId() != Type::Compound) {
        throw std::runtime_error("Not a CompoundTag");
    }

    return *((CompoundTag*)this)->get(index);
}
Tag const& Tag::operator[](std::string_view index) const {

    if (getId() != Type::Compound) {
        throw std::runtime_error("Not a CompoundTag");
    }

    return *((CompoundTag const*)this)->get(index);
}