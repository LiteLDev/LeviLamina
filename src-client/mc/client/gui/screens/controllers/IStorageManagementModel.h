#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class I18n;
class PackManifest;
struct ContentItem;
// clang-format on

class IStorageManagementModel {
public:
    // IStorageManagementModel inner types declare
    // clang-format off
    struct PremiumWorldInfo;
    // clang-format on

    // IStorageManagementModel inner types define
    struct PremiumWorldInfo {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStorageManagementModel() = default;

    virtual bool isPremiumLocked(::PackManifest const&) const = 0;

    virtual ::IStorageManagementModel::PremiumWorldInfo getWorldInfo(::std::string const&) const = 0;

    virtual ::I18n& getI18n() const = 0;

    virtual void clearCompletedDownloads() = 0;

    virtual void navigateToDeleteProgressScreen(::std::vector<::std::shared_ptr<::ContentItem const>>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
