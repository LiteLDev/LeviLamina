#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

class CoroutineTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk30f8cb;
    ::ll::UntypedStorage<8, 40> mUnk864080;
    ::ll::UntypedStorage<8, 24> mUnk7161c8;
    ::ll::UntypedStorage<8, 64> mUnkc32446;
    ::ll::UntypedStorage<8, 64> mUnk41974b;
    ::ll::UntypedStorage<8, 40> mUnk6c4c12;
    ::ll::UntypedStorage<8, 32> mUnk9bf326;
    ::ll::UntypedStorage<8, 8>  mUnk3c4620;
    ::ll::UntypedStorage<8, 8>  mUnk81363a;
    ::ll::UntypedStorage<8, 8>  mUnke316ba;
    ::ll::UntypedStorage<1, 1>  mUnk62e0c6;
    ::ll::UntypedStorage<1, 1>  mUnk6ab911;
    ::ll::UntypedStorage<1, 1>  mUnkfec9a1;
    // NOLINTEND

public:
    // prevent constructor by default
    CoroutineTaskContext& operator=(CoroutineTaskContext const&);
    CoroutineTaskContext(CoroutineTaskContext const&);
    CoroutineTaskContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void completeProgress(::std::string message);

    MCNAPI void setActivity(::std::string activity);

    MCNAPI bool shouldYield() const;

    MCNAPI void updateProgress(float progress, ::std::string message);
    // NOLINTEND
};

} // namespace Editor::Coroutine
