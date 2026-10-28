#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictExecutionContextBase;
// clang-format on

struct GetCollisionShapeViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk33fd01;
    ::ll::UntypedStorage<8, 24>  mUnke5b76a;
    ::ll::UntypedStorage<8, 24>  mUnk1eed09;
    ::ll::UntypedStorage<8, 24>  mUnk1c77fc;
    ::ll::UntypedStorage<8, 24>  mUnk1e007a;
    ::ll::UntypedStorage<8, 24>  mUnkc47041;
    ::ll::UntypedStorage<8, 24>  mUnk8ea84b;
    ::ll::UntypedStorage<8, 24>  mUnkd21c16;
    ::ll::UntypedStorage<8, 24>  mUnk96eb07;
    ::ll::UntypedStorage<8, 24>  mUnkdcc2dd;
    ::ll::UntypedStorage<8, 8>   mUnk760f94;
    ::ll::UntypedStorage<8, 480> mUnka9557f;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCollisionShapeViews& operator=(GetCollisionShapeViews const&);
    GetCollisionShapeViews(GetCollisionShapeViews const&);
    GetCollisionShapeViews();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GetCollisionShapeViews(::StrictExecutionContextBase& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StrictExecutionContextBase& context);
    // NOLINTEND
};
