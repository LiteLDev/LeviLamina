#include "GUI.h"

#include <cstring>
#include <string>
#include <vector>

#include <dwrite.h>
#include <windows.h>
#include <wingdi.h>
#include <winuser.h>

#pragma warning(push)
#pragma warning(disable : 5204)
#include <atlbase.h>
#pragma warning(pop)

#include "imgui.h"

#include "ImGuiAnsiColor.h"
#include "ImGuiHooks.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/io/LogPipe.h"

static bool isValidFontFileType(DWRITE_FONT_FILE_TYPE fileType) {
    return fileType == DWRITE_FONT_FILE_TYPE_CFF || fileType == DWRITE_FONT_FILE_TYPE_TRUETYPE
        || fileType == DWRITE_FONT_FILE_TYPE_OPENTYPE_COLLECTION
        || fileType == DWRITE_FONT_FILE_TYPE_TRUETYPE_COLLECTION;
}

static std::vector<std::wstring> getFilePathFromIDWriteFontFace(IDWriteFontFace* fontFace) {
    std::vector<std::wstring> result;

    UINT32 fileCount = 0;
    fontFace->GetFiles(&fileCount, nullptr);

    std::unique_ptr<IDWriteFontFile*[]> fontFiles = std::make_unique<IDWriteFontFile*[]>(fileCount);
    fontFace->GetFiles(&fileCount, fontFiles.get());
    for (unsigned int i = 0; i < fileCount; i++) {
        IDWriteFontFile* fontFile = fontFiles[i];

        void*  refKey     = nullptr;
        UINT32 refKeySize = 0;
        fontFile->GetReferenceKey((const void**)&refKey, &refKeySize);

        CComPtr<IDWriteFontFileLoader> loader;
        fontFile->GetLoader(&loader);

        CComPtr<IDWriteLocalFontFileLoader> localLoader;
        loader->QueryInterface(&localLoader);

        BOOL                  isSupportedFontType = false;
        DWRITE_FONT_FILE_TYPE fontFileType        = DWRITE_FONT_FILE_TYPE_UNKNOWN;
        DWRITE_FONT_FACE_TYPE fontFaceType        = DWRITE_FONT_FACE_TYPE_UNKNOWN;
        UINT32                numberOfFaces       = 0;
        fontFile->Analyze(&isSupportedFontType, &fontFileType, &fontFaceType, &numberOfFaces);
        if (!isValidFontFileType(fontFileType)) {
            continue;
        }

        UINT pathLen = 0;
        localLoader->GetFilePathLengthFromKey(refKey, refKeySize, &pathLen);

        std::unique_ptr<wchar_t[]> buffer = std::make_unique<wchar_t[]>(pathLen + 1);
        localLoader->GetFilePathFromKey(refKey, refKeySize, buffer.get(), pathLen + 1);

        std::wstring filePath{buffer.get()};
        result.push_back(filePath);
    }
    for (unsigned int i = 0; i < fileCount; i++) {
        fontFiles[i]->Release();
    }
    return result;
}

static std::vector<std::wstring> getFilePathFromLogFontW(const LOGFONTW* lf) {
    CComPtr<IDWriteFactory> dwriteFactory;
    DWriteCreateFactory(
        DWRITE_FACTORY_TYPE_ISOLATED,
        __uuidof(IDWriteFactory),
        reinterpret_cast<IUnknown**>(&dwriteFactory)
    );

    CComPtr<IDWriteGdiInterop> gdiInterop;
    dwriteFactory->GetGdiInterop(&gdiInterop);

    HDC     dc     = CreateCompatibleDC(nullptr);
    HFONT   hFont  = CreateFontIndirectW(lf);
    HGDIOBJ oldObj = SelectObject(dc, hFont);

    CComPtr<IDWriteFontFace> fontFace = nullptr;
    gdiInterop->CreateFontFaceFromHdc(dc, &fontFace);
    std::vector<std::wstring> result = getFilePathFromIDWriteFontFace(fontFace);
    fontFace.Release();

    SelectObject(dc, oldObj);
    DeleteObject(hFont);
    DeleteDC(dc);
    return result;
}

static std::vector<std::wstring> getSystemDefaultMessageFontPaths() {
    NONCLIENTMETRICSW nonClientMetrics;
    nonClientMetrics.cbSize = sizeof(nonClientMetrics);
    if (SystemParametersInfoW(SPI_GETNONCLIENTMETRICS, sizeof(nonClientMetrics), &nonClientMetrics, 0)) {
        return getFilePathFromLogFontW(&nonClientMetrics.lfMessageFont);
    }
    return {};
}

namespace ll::gui {
class LogWindow {
    std::string      title;
    bool             open = false;
    ImGuiTextBuffer  buf;
    ImGuiTextFilter  filter;
    std::vector<int> lineOffsets;
    bool             autoScroll = true;

public:
    LogWindow(const std::string& title) : title(title) { clear(); }

    void clear() {
        buf.clear();
        lineOffsets.clear();
        lineOffsets.push_back(0);
    }

    void addLog(const std::string& log) {
        if (log.empty()) {
            return;
        }
        int oldSize = buf.size();
        buf.append(log.c_str());
        for (int newSize = buf.size(); oldSize < newSize; oldSize++) {
            if (buf[oldSize] == '\n') {
                lineOffsets.push_back(oldSize + 1);
            }
        }
    }

    void draw() {
        if (!open) {
            return;
        }

        if (!ImGui::Begin(title.c_str(), &open)) {
            ImGui::End();
            return;
        }

        bool clear = ImGui::Button("Clear");
        ImGui::SameLine();
        bool copy = ImGui::Button("Copy");
        ImGui::SameLine();
        ImGui::Checkbox("Auto-scroll", &autoScroll);
        ImGui::SameLine();
        filter.Draw("Filter", -100.0f);

        ImGui::Separator();

        if (ImGui::BeginChild("scrolling", ImVec2(0, 0), false, ImGuiWindowFlags_HorizontalScrollbar)) {
            if (clear) {
                this->clear();
            }
            if (copy) {
                ImGui::LogToClipboard();
            }
            ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
            const char* bufBegin = this->buf.begin();
            const char* bufEnd   = this->buf.end();
            if (filter.IsActive()) {
                // Don't use the clipper when Filter is enabled because we don't have random access
                // to the result of the filter
                for (int lineNum = 0; lineNum < lineOffsets.size(); lineNum++) {
                    const char* lineStart = bufBegin + lineOffsets[lineNum];
                    const char* lineEnd =
                        (lineNum + 1 < lineOffsets.size()) ? (bufBegin + lineOffsets[lineNum + 1] - 1) : bufEnd;
                    if (filter.PassFilter(lineStart, lineEnd)) {
                        textAnsiUnformatted(lineStart, lineEnd);
                    }
                }
            } else {
                // Use ImGuiListClipper for better performance
                ImGuiListClipper clipper;
                clipper.Begin((int)lineOffsets.size());
                while (clipper.Step()) {
                    for (int lineNum = clipper.DisplayStart; lineNum < clipper.DisplayEnd; lineNum++) {
                        const char* lineStart = bufBegin + lineOffsets[lineNum];
                        const char* lineEnd =
                            (lineNum + 1 < lineOffsets.size()) ? (bufBegin + lineOffsets[lineNum + 1] - 1) : bufEnd;
                        textAnsiUnformatted(lineStart, lineEnd);
                    }
                }
                clipper.End();
            }
            ImGui::PopStyleVar();

            if (autoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()) {
                ImGui::SetScrollHereY(1.0f);
            }
        }
        ImGui::EndChild();
        ImGui::End();
    }

    bool isOpen() const { return open; }

    void setOpen(bool b) { this->open = b; }
};

static LogWindow logWindow("Log");

void initializeImGui() {
    ImGui::CreateContext();

    ImGuiIO& io    = ImGui::GetIO();
    io.IniFilename = nullptr;

    logWindow.setOpen(true);
}

void updateImGui() {
    static bool showPerformance = true;
    static bool showDemo        = true;

    logWindow.addLog(io::getDefaultLogPipe().read());

    auto& io = ImGui::GetIO();
    ImGui::NewFrame();
    if (showPerformance) {
        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Performance", &showPerformance)) {
            static float framerate    = io.Framerate;
            static float deltaTime    = io.DeltaTime;
            static float updateTimer  = 0.5f;
            updateTimer              -= io.DeltaTime;
            if (updateTimer <= 0) {
                framerate   = io.Framerate;
                deltaTime   = io.DeltaTime;
                updateTimer = 0.5f;
            }
            ImGui::Text("Renderer: %s", getRendererType().c_str());
            ImGui::Text("Renderer Name: %s", getGPUName().c_str());
            ImGui::Text("FPS: %.01f", framerate);
            ImGui::Text("Frame Time: %.01fms", deltaTime * 1000.0f);
        }
    }

    if (logWindow.isOpen()) {
        ImGui::SetNextWindowPos(ImVec2(10, 200), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(860, 480), ImGuiCond_FirstUseEver);
        logWindow.draw();
    }

    if (showDemo) {
        ImGui::ShowDemoWindow(&showDemo);
    }
    ImGui::EndFrame();
}

void updateScaling(float dpi) {
    float    scale = dpi / 96.0f;
    ImGuiIO& io    = ImGui::GetIO();

    ImGuiStyle& style       = ImGui::GetStyle();
    ImGuiStyle  styleold    = style;
    style                   = ImGuiStyle();
    style.WindowBorderSize  = 1.0f;
    style.ChildBorderSize   = 1.0f;
    style.PopupBorderSize   = 1.0f;
    style.FrameBorderSize   = 1.0f;
    style.TabBorderSize     = 1.0f;
    style.WindowRounding    = 0.0f;
    style.ChildRounding     = 0.0f;
    style.PopupRounding     = 0.0f;
    style.FrameRounding     = 0.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabRounding      = 0.0f;
    style.TabRounding       = 0.0f;
    style.ScaleAllSizes(scale);
    memcpy(style.Colors, styleold.Colors, sizeof(style.Colors));

    io.Fonts->Clear();
    ImFont* font = nullptr;

    auto sysFontPaths = getSystemDefaultMessageFontPaths();
    if (!sysFontPaths.empty()) {
        auto path = ll::string_utils::wstr2str(sysFontPaths[0]);
        font      = io.Fonts->AddFontFromFileTTF(
            path.c_str(),
            16.0f * scale,
            nullptr,
            io.Fonts->GetGlyphRangesChineseSimplifiedCommon()
        );
    }

    if (!font) {
        ImFontConfig fontCfg;
        fontCfg.SizePixels = 13.0f * scale;
        io.Fonts->AddFontDefault(&fontCfg);
    }
}
} // namespace ll::gui