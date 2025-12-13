#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class CompositePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PackSource*>> mPackSources;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositePackSource() /*override*/ = default;

    virtual void
    forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback) /*override*/;

    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources) /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);

    MCAPI void $_buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);

    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
