#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PersonaPiece;
class SemVersion;
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

class IPersonaPiecePackLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaPiecePackLoader() = default;

    virtual bool isPieceLoaded(::mce::UUID const& pieceId) const = 0;

    virtual bool isKnownPersonaPiece(::mce::UUID const& pieceId) const = 0;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const& pieceId) const = 0;

    virtual bool isPersonaPieceLoading(::mce::UUID const& peiceId) const = 0;

    virtual bool isPersonaPieceInRepo(::mce::UUID const& pieceId) const = 0;

    virtual bool isPersonaPieceInRepo(::std::string const& pieceId) const = 0;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(::std::string const& pieceId) const = 0;

    virtual void forEachPersonaPack(::std::function<void(::Pack const&)> const& callback) const = 0;

    virtual ::std::vector<::persona::PieceOfferWrapper>
    getDefaultPieceWrappersOfTypes(::std::vector<::SharedTypes::persona::PieceType> const& sections) const = 0;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const& packId) const = 0;

    virtual void loadPiecePack(::mce::UUID packId) = 0;

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack) = 0;

    virtual ::std::vector<::std::string> const& getPieceIdsByType(::SharedTypes::persona::PieceType type) const = 0;
    // NOLINTEND
};
