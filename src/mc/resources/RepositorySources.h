#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackSourceFactory;
namespace Core { class PathView; }
// clang-format on

class RepositorySources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk225556;
    ::ll::UntypedStorage<8, 8> mUnk9e3a49;
    ::ll::UntypedStorage<8, 8> mUnka15aef;
    ::ll::UntypedStorage<8, 8> mUnk37752a;
    ::ll::UntypedStorage<8, 8> mUnkd29519;
    ::ll::UntypedStorage<8, 8> mUnk1a72a3;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySources& operator=(RepositorySources const&);
    RepositorySources(RepositorySources const&);
    RepositorySources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeCachedPackSource(::PackSourceFactory& packSourceFactory);

    MCNAPI void initializePackSource(::PackSourceFactory& packSourceFactory);

    MCNAPI void initializeWorldPackSource(::PackSourceFactory& packSourceFactory, ::Core::PathView currentWorldPath);
    // NOLINTEND
};
