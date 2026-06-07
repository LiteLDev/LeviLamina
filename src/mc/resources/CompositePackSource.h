#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct CompositePackSourceOptions;
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
    // prevent constructor by default
    CompositePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositePackSource() /*override*/;

    virtual void
    forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback) /*override*/;

    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources) /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CompositePackSource(::CompositePackSourceOptions options);

    MCFOLD void addPackSource(::PackSource* packSource);

    MCFOLD void clear();

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackSource*> getPackSources();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompositePackSourceOptions options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
