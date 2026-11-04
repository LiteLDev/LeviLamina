#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/puv/LoggerIterator.h"

namespace Puv {

class Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct ParseLogEntry;
    struct UpgradeLogEntry;
    struct ValidationLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode : uchar {
        // bitfield representation
        UnsupportedVersion = 1 << 0,
        SrcError           = 1 << 1,
        DstError           = 1 << 2,
        InternalError      = 1 << 3,
        CopyError          = 1 << 4,
        EnttEnumAsBitmask  = 255,
        All                = 255,
    };

    enum class ValidationResultCode : uchar {
        Warning           = 1,
        Error             = 2,
        All               = 255,
        EnttEnumAsBitmask = 255,
    };

    struct ParseLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode> mResultCode;
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>>>
                                                 mContext;
        ::ll::TypedStorage<8, 32, ::std::string> mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseLogEntry& operator=(ParseLogEntry const&);
        ParseLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ParseLogEntry(::Puv::Logger::ParseLogEntry const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Puv::Logger::ParseLogEntry const&);
        // NOLINTEND
    };

    struct UpgradeLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode> mResultCode;
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>>>
            mContextSrc;
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>>>
                                                 mContextDst;
        ::ll::TypedStorage<8, 32, ::std::string> mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI UpgradeLogEntry(::Puv::Logger::UpgradeLogEntry const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Puv::Logger::UpgradeLogEntry const&);
        // NOLINTEND
    };

    struct ValidationLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Puv::Logger::ValidationResultCode> mResultCode;
        ::ll::TypedStorage<8, 32, ::std::string>                      mMessage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidationLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Context = ::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>;

    using ContextType = ::cereal::BasicSerializerContext::ContextType;

    using ParseLogIterable = ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ParseLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ParseLogEntry>>>>>;

    using ParseResultCode = ::cereal::ResultCode;

    using UpgradeLogIterable = ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>>;

    using ValidationLogIterable = ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>,
        ::Puv::LoggerIterator<::std::_Vector_const_iterator<
            ::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Puv::Logger::ParseLogEntry>>      mParseLog;
    ::ll::TypedStorage<8, 24, ::std::vector<::Puv::Logger::UpgradeLogEntry>>    mUpgradeLog;
    ::ll::TypedStorage<8, 24, ::std::vector<::Puv::Logger::ValidationLogEntry>> mValidationLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                              mParseErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode>                  mUpgradeErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::ValidationResultCode>               mValidationErrorCodes;
    ::ll::TypedStorage<1, 1, bool>                                              mHasErrors;
    // NOLINTEND

public:
    // prevent constructor by default
    Logger& operator=(Logger const&);
    Logger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Logger(::Puv::Logger const&);

    MCNAPI ::Puv::Logger& log(::Puv::Logger::ValidationResultCode res, ::std::string msg);

    MCNAPI ::Puv::Logger&
    log(::cereal::ResultCode                                                                     res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> path,
        ::std::string                                                                            msg);

    MCNAPI ::Puv::Logger&
    log(::Puv::Logger::UpgradeResultCode                                                         res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> src,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> dst,
        ::std::string                                                                            msg);

    MCNAPI void merge(::Puv::Logger log);

    MCNAPI ~Logger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string contextString(
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> const& contextStack
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::Logger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
