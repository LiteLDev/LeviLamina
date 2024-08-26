#include "ll/api/utils/FontUtils.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/StringUtils.h"

#include "windows.h"

#include "dwrite.h"
#include "wingdi.h"
#include "winuser.h"

#include "atlbase.h"

namespace ll::inline utils::font_utils {
using namespace string_utils;

static bool isValidFontFileType(DWRITE_FONT_FILE_TYPE fileType) {
    return fileType == DWRITE_FONT_FILE_TYPE_CFF || fileType == DWRITE_FONT_FILE_TYPE_TRUETYPE
        || fileType == DWRITE_FONT_FILE_TYPE_OPENTYPE_COLLECTION
        || fileType == DWRITE_FONT_FILE_TYPE_TRUETYPE_COLLECTION;
}

static std::vector<std::filesystem::path> getFilePathFromIDWriteFontFace(IDWriteFontFace& fontFace) {
    std::vector<std::filesystem::path> result;

    UINT32  fileCount = 0;
    HRESULT hr        = fontFace.GetFiles(&fileCount, nullptr);
    if (!SUCCEEDED(hr)) {
        return result;
    }
    std::unique_ptr<IDWriteFontFile*[]> fontFiles = std::make_unique_for_overwrite<IDWriteFontFile*[]>(fileCount);
    hr                                            = fontFace.GetFiles(&fileCount, fontFiles.get());
    for (uint i = 0; i < fileCount; i++) {
        IDWriteFontFile* fontFile = fontFiles[i];

        void*  refKey{};
        UINT32 refKeySize = 0;
        if (SUCCEEDED(hr)) {
            hr = fontFile->GetReferenceKey((const void**)&refKey, &refKeySize);
        }
        CComPtr<IDWriteFontFileLoader> loader;
        if (SUCCEEDED(hr)) {
            hr = fontFile->GetLoader(&loader);
        }
        CComPtr<IDWriteLocalFontFileLoader> localLoader;
        if (SUCCEEDED(hr)) {
            hr = loader->QueryInterface(&localLoader);
        }
        BOOL                  isSupportedFontType = false;
        DWRITE_FONT_FILE_TYPE fontFileType        = DWRITE_FONT_FILE_TYPE_UNKNOWN;
        DWRITE_FONT_FACE_TYPE fontFaceType        = DWRITE_FONT_FACE_TYPE_UNKNOWN;
        UINT32                numberOfFaces       = 0;
        if (SUCCEEDED(hr)) {
            hr = fontFile->Analyze(&isSupportedFontType, &fontFileType, &fontFaceType, &numberOfFaces);
        }
        if (!isValidFontFileType(fontFileType)) {
            continue;
        }
        UINT pathLen = 0;
        if (SUCCEEDED(hr)) {
            hr = localLoader->GetFilePathLengthFromKey(refKey, refKeySize, &pathLen);
        }
        std::wstring filePath(pathLen, '\0');
        if (SUCCEEDED(hr)) {
            hr = localLoader->GetFilePathFromKey(refKey, refKeySize, filePath.data(), pathLen + 1);
        }
        result.push_back(std::move(filePath));
    }
    for (uint i = 0; i < fileCount; i++) {
        fontFiles[i]->Release();
    }
    return result;
}

static std::vector<std::filesystem::path> getFilePathFromIDWriteFontFamily(
    IDWriteFontFamily& family,
    optional_ref<uint> index,
    float              weight,
    float              stretch,
    FontStyle          style
) {
    CComPtr<IDWriteFont> pDWriteFont;
    HRESULT              hr = family.GetFirstMatchingFont(
        (DWRITE_FONT_WEIGHT)std::round(1 + weight * 998),
        (DWRITE_FONT_STRETCH)std::round(1 + stretch * 8),
        (DWRITE_FONT_STYLE)style,
        &pDWriteFont
    );
    CComPtr<IDWriteFontFace> pDWriteFontFace;
    if (SUCCEEDED(hr)) {
        hr = pDWriteFont->CreateFontFace(&pDWriteFontFace);
    }
    if (SUCCEEDED(hr)) {
        if (index) {
            *index = pDWriteFontFace->GetIndex();
        }
        return getFilePathFromIDWriteFontFace(*pDWriteFontFace);
    }
    return {};
}

std::vector<std::filesystem::path> getFilePathFromFontName(
    std::string_view         name,
    optional_ref<uint>       index,
    std::optional<float>     weight,
    std::optional<float>     stretch,
    std::optional<FontStyle> style
) {
    CComPtr<IDWriteFactory> pDWriteFactory;
    HRESULT                 hr = DWriteCreateFactory(
        DWRITE_FACTORY_TYPE_SHARED,
        __uuidof(IDWriteFactory),
        reinterpret_cast<IUnknown**>(&pDWriteFactory)
    );
    CComPtr<IDWriteFontCollection> pFontCollection;
    // Get the system font collection.
    if (SUCCEEDED(hr)) {
        hr = pDWriteFactory->GetSystemFontCollection(&pFontCollection);
    }
    UINT32 findex = 0;
    BOOL   exists = false;
    // Get the number of font families in the collection.
    if (SUCCEEDED(hr)) {
        hr = pFontCollection->FindFamilyName(str2wstr(name).c_str(), &findex, &exists);
    }
    CComPtr<IDWriteFontFamily> pFontFamily;
    if (SUCCEEDED(hr) && exists && findex != UINT_MAX) {
        hr = pFontCollection->GetFontFamily(findex, &pFontFamily);
    }
    if (SUCCEEDED(hr)) {
        return getFilePathFromIDWriteFontFamily(
            *pFontFamily,
            index,
            weight.value_or(0.5f),
            stretch.value_or(0.5f),
            style.value_or(FontStyle::Normal)
        );
    }
    return {};
}

std::vector<std::string> getSystemFontNames() {
    CComPtr<IDWriteFactory> pDWriteFactory;
    HRESULT                 hr = DWriteCreateFactory(
        DWRITE_FACTORY_TYPE_SHARED,
        __uuidof(IDWriteFactory),
        reinterpret_cast<IUnknown**>(&pDWriteFactory)
    );
    CComPtr<IDWriteFontCollection> pFontCollection;
    // Get the system font collection.
    if (SUCCEEDED(hr)) {
        hr = pDWriteFactory->GetSystemFontCollection(&pFontCollection);
    }
    UINT32 familyCount = 0;
    // Get the number of font families in the collection.
    if (SUCCEEDED(hr)) {
        familyCount = pFontCollection->GetFontFamilyCount();
    }
    std::wstring             localeCode = str2wstr(i18n::getDefaultLocaleCode());
    std::vector<std::string> result;
    result.reserve(familyCount);
    for (UINT32 i = 0; i < familyCount; ++i) {
        CComPtr<IDWriteFontFamily> pFontFamily;
        // Get the font family.
        if (SUCCEEDED(hr)) {
            hr = pFontCollection->GetFontFamily(i, &pFontFamily);
        }
        CComPtr<IDWriteLocalizedStrings> pFamilyNames;
        // Get a list of localized strings for the family name.
        if (SUCCEEDED(hr)) {
            hr = pFontFamily->GetFamilyNames(&pFamilyNames);
        }
        UINT32 index  = 0;
        BOOL   exists = false;

        if (SUCCEEDED(hr)) {
            // If the default locale is returned, find that locale name, otherwise use "en-us".
            hr = pFamilyNames->FindLocaleName(localeCode.c_str(), &index, &exists);

            if (SUCCEEDED(hr) && !exists) // if the above find did not find a match, retry with US English
            {
                hr = pFamilyNames->FindLocaleName(L"en-us", &index, &exists);
            }
        }
        // If the specified locale doesn't exist, select the first on the list.
        if (!exists) index = 0;

        UINT32 length = 0;
        // Get the string length.
        if (SUCCEEDED(hr)) {
            hr = pFamilyNames->GetStringLength(index, &length);
        }
        // Get the family name.
        if (SUCCEEDED(hr)) {
            std::wstring name(length, '\0');
            hr = pFamilyNames->GetString(index, name.data(), length + 1);
            result.emplace_back(wstr2str(name));
        }
    }
    return result;
}

LLNDAPI std::optional<std::string> getSystemDefaultFontName() {
    NONCLIENTMETRICSW nonClientMetrics;
    nonClientMetrics.cbSize = sizeof(nonClientMetrics);
    if (SystemParametersInfoW(SPI_GETNONCLIENTMETRICS, sizeof(nonClientMetrics), &nonClientMetrics, 0)) {
        return wstr2str(nonClientMetrics.lfMessageFont.lfFaceName);
    }
    return {};
}
} // namespace ll::inline utils::font_utils
