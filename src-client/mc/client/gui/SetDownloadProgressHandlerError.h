#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/util/DownloadError.h"

struct SetDownloadProgressHandlerError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                             id;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MSGraph::GraphResponse)>> setSyncError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::DownloadError)>>          setDownloadError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MSGraph::GraphResponse)>> setGraphError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ImportFailure)>>          setImportError;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDownloadProgressHandlerError& operator=(SetDownloadProgressHandlerError const&);
    SetDownloadProgressHandlerError(SetDownloadProgressHandlerError const&);
    SetDownloadProgressHandlerError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetDownloadProgressHandlerError(::SetDownloadProgressHandlerError&&);

    MCAPI ~SetDownloadProgressHandlerError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SetDownloadProgressHandlerError&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
