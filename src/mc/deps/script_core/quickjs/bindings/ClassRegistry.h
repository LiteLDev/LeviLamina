#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ClassRegistry {
public:
    // ClassRegistry inner types declare
    // clang-format off
    struct TypeHash;
    // clang-format on

    // ClassRegistry inner types define
    struct TypeHash {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd88e5;
    ::ll::UntypedStorage<8, 64> mUnkcb84ca;
    ::ll::UntypedStorage<8, 64> mUnk7668c8;
    ::ll::UntypedStorage<8, 64> mUnk167758;
    ::ll::UntypedStorage<8, 64> mUnk8a16c7;
    ::ll::UntypedStorage<8, 64> mUnk85c83f;
    ::ll::UntypedStorage<8, 64> mUnkfb655b;
    ::ll::UntypedStorage<8, 64> mUnkb30580;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassRegistry& operator=(ClassRegistry const&);
    ClassRegistry(ClassRegistry const&);
    ClassRegistry();
};

} // namespace Scripting::QuickJS
