#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Http {

class FileRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6c20f;
    ::ll::UntypedStorage<8, 16> mUnkbdbe9d;
    ::ll::UntypedStorage<1, 1>  mUnk84e5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    FileRequestBody& operator=(FileRequestBody const&);
    FileRequestBody(FileRequestBody const&);
    FileRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;
#endif

    virtual uint64 getSize() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableSource() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit FileRequestBody(::Core::Path filename);

    MCNAPI void _closeIfEof();

    MCNAPI bool _lazyOpenFileHandle();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::shared_ptr<::Bedrock::Http::FileRequestBody> create(::Core::Path filename);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path filename);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);

    MCNAPI uint64 $getSize();

    MCNAPI void $cancel();

    MCNAPI ::std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
