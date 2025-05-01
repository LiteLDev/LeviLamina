#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock {

template <class T>
class UniqueOwnerPointer {
public:
    std::unique_ptr<Bedrock::EnableNonOwnerReferences> mEnableNonOwnerReferences;
    std::unique_ptr<T>                                 mValue;

public:
    UniqueOwnerPointer() = default;
    UniqueOwnerPointer(nullptr_t) {}
    ~UniqueOwnerPointer() = default;

    UniqueOwnerPointer(UniqueOwnerPointer const&)            = delete;
    UniqueOwnerPointer& operator=(UniqueOwnerPointer const&) = delete;

    UniqueOwnerPointer(UniqueOwnerPointer&&)            = default;
    UniqueOwnerPointer& operator=(UniqueOwnerPointer&&) = default;

    UniqueOwnerPointer(std::unique_ptr<T> ptr)
    : mEnableNonOwnerReferences(std::make_unique<Bedrock::EnableNonOwnerReferences>(*ptr)),
      mValue(std::move(ptr)) {}

    UniqueOwnerPointer& operator=(nullptr_t) { reset(); }

    T* get() const { return mValue.get(); }
    T* operator->() const { return get(); }
    T& operator*() const { return *get(); }

    bool     isValid() const { return mValue != nullptr; }
    explicit operator bool() const { return isValid(); }

    void reset() {
        mEnableNonOwnerReferences.reset();
        mValue.reset();
    }

    bool operator==(UniqueOwnerPointer const& other) const { return mValue == other.mValue; }
    bool operator==(nullptr_t) const { return mValue == nullptr; }
};

} // namespace Bedrock
