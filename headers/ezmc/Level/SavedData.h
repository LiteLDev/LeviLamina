#pragma once

#include <string>

class SavedData {
public:
    bool        dirty;
    std::string buffer;
    virtual ~SavedData() = default;
    virtual void deserialize(class CompoundTag const&);
    virtual void serialize(class CompoundTag&) const;
};