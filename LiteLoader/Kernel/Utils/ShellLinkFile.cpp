#include <ShlObj.h>
#include <Utils/ShellLinkFile.h>
#include <Utils/StringHelper.h>

void ShellLinkFile::_Init() {
    auto res = ::CoInitialize(nullptr);
    if (res != S_OK && res != S_FALSE) {
        throw std::exception("ShellLinkFile::ShellLinkFile:: Error when initializing the COM library");
    }

    // Init IShellLink
    res =
        ::CoCreateInstance(CLSID_ShellLink, nullptr, CLSCTX_INPROC_SERVER, IID_IShellLinkW, (LPVOID*)&this->shellLink);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::ShellLinkFile:: Error when creating the IShellLink instance");
    }

    res = shellLink->QueryInterface(IID_IPersistFile, (void**)&this->presistFile);

    if (res != S_OK) {
        throw std::exception("ShellLinkFile::ShellLinkFile:: Error when querying to get the interface");
    }
}

ShellLinkFile::ShellLinkFile(const std::string& path) {
    _Init();
    if (!path.empty()) {
        load(path);
        lnkPath = str2wstr(path);
    }
}
ShellLinkFile::ShellLinkFile(const std::wstring& path) {
    _Init();
    if (!path.empty()) {
        load(path);
        lnkPath = path;
    }
}

ShellLinkFile::~ShellLinkFile() {
    close();
}

ShellLinkFile& ShellLinkFile::load(const std::string& path) {
    return load(str2wstr(path));
}
ShellLinkFile& ShellLinkFile::load(const std::wstring& path) {
    if (path.empty()) {
        throw std::exception("ShellLinkFile::load:: The path is empty");
    }
    if (!presistFile) {
        throw std::exception("ShellLinkFile::load: presistFile is null");
    }
    auto res = presistFile->Load(path.c_str(), 0);
    lnkPath = path;
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::load: Failed to load");
    }
    return *this;
}

ShellLinkFile& ShellLinkFile::save(const std::string& path) {
    return save(str2wstr(path));
}
ShellLinkFile& ShellLinkFile::save(const std::wstring& path) {
    if (!presistFile) {
        throw std::exception("ShellLinkFile::save: presistFile is null");
    }
    auto res = presistFile->Load((path.empty() ? lnkPath : path).c_str(), true);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::save: Failed to save");
    }
    return *this;
}

bool ShellLinkFile::resolve(HWND hwnd, DWORD flags) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::resolve: shellLink is null");
    }
    return shellLink->Resolve(hwnd, flags) == S_OK;
}

void ShellLinkFile::close() {
    if (presistFile) {
        presistFile->Release();
        presistFile = nullptr;
    }
    if (shellLink) {
        shellLink->Release();
        shellLink = nullptr;
    }
    ::CoUninitialize();
}

std::string ShellLinkFile::getPath() {
    return wstr2str(getPathW());
}
std::wstring ShellLinkFile::getPathW() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getPathW: shellLink is null");
    }
    wchar_t buf[8192] = {0};
    auto res = shellLink->GetPath(buf, 8192, nullptr, 0);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getPathW: Failed to get the path");
    }
    return std::wstring(buf);
}
ShellLinkFile& ShellLinkFile::setPath(const std::string& path) {
    return setPath(str2wstr(path));
}
ShellLinkFile& ShellLinkFile::setPath(const std::wstring& path) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setPath: shellLink is null");
    }
    auto res = shellLink->SetPath(path.c_str());
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setPath: Failed to set the path");
    }
    return *this;
}

std::string ShellLinkFile::getWorkingDirectory() {
    return wstr2str(getWorkingDirectoryW());
}
std::wstring ShellLinkFile::getWorkingDirectoryW() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getWorkingDirectoryW: shellLink is null");
    }
    wchar_t buf[8192] = {0};
    auto res = shellLink->GetWorkingDirectory(buf, 8192);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getWorkingDirectoryW: Failed to get the working directory");
    }
    return std::wstring(buf);
}
ShellLinkFile& ShellLinkFile::setWorkingDirectory(const std::string& path) {
    return setWorkingDirectory(str2wstr(path));
}
ShellLinkFile& ShellLinkFile::setWorkingDirectory(const std::wstring& path) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setWorkingDirectory: shellLink is null");
    }
    auto res = shellLink->SetWorkingDirectory(path.c_str());
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setWorkingDirectory: Failed to set the working directory");
    }
    return *this;
}

std::string ShellLinkFile::getDescription() {
    return wstr2str(getDescriptionW());
}
std::wstring ShellLinkFile::getDescriptionW() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getDescriptionW: shellLink is null");
    }
    wchar_t buf[8192] = {0};
    auto res = shellLink->GetDescription(buf, 8192);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getDescriptionW: Failed to get the description");
    }
    return std::wstring(buf);
}
ShellLinkFile& ShellLinkFile::setDescription(const std::string& desc) {
    return setDescription(str2wstr(desc));
}
ShellLinkFile& ShellLinkFile::setDescription(const std::wstring& desc) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setDescription: shellLink is null");
    }
    auto res = shellLink->SetDescription(desc.c_str());
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setDescription: Failed to set the description");
    }
    return *this;
}

std::string ShellLinkFile::getArguments() {
    return wstr2str(getArgumentsW());
}
std::wstring ShellLinkFile::getArgumentsW() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getArgumentsW: shellLink is null");
    }
    wchar_t buf[8192] = {0};
    auto res = shellLink->GetArguments(buf, 8192);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getArgumentsW: Failed to get the arguments");
    }
    return std::wstring(buf);
}
ShellLinkFile& ShellLinkFile::setArguments(const std::string& arguments) {
    return setArguments(str2wstr(arguments));
}
ShellLinkFile& ShellLinkFile::setArguments(const std::wstring& arguments) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setArguments: shellLink is null");
    }
    auto res = shellLink->SetArguments(arguments.c_str());
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setArguments: Failed to set the arguments");
    }
    return *this;
}

std::string ShellLinkFile::getIconLocation() {
    return wstr2str(getIconLocationW());
}
std::wstring ShellLinkFile::getIconLocationW() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getIconLocationW: shellLink is null");
    }
    wchar_t buf[8192] = {0};
    auto res = shellLink->GetIconLocation(buf, 8192, 0);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getIconLocationW: Failed to get the icon location");
    }
    return std::wstring(buf);
}
ShellLinkFile& ShellLinkFile::setIconLocation(const std::string& iconLocation) {
    return setIconLocation(str2wstr(iconLocation));
}
ShellLinkFile& ShellLinkFile::setIconLocation(const std::wstring& iconLocation) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setIconLocation: shellLink is null");
    }
    auto res = shellLink->SetIconLocation(iconLocation.c_str(), 0);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setIconLocation: Failed to set the icon location");
    }
    return *this;
}

int ShellLinkFile::getShowCmd() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getShowCmd: shellLink is null");
    }
    int showCmd = 0;
    auto res = shellLink->GetShowCmd(&showCmd);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getShowCmd: Failed to get the show command");
    }
    return showCmd;
}
ShellLinkFile& ShellLinkFile::setShowCmd(int showCmd) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setShowCmd: shellLink is null");
    }
    auto res = shellLink->SetShowCmd(showCmd);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setShowCmd: Failed to set the show command");
    }
    return *this;
}

ShellLinkFile::HotKey ShellLinkFile::getHotKey() {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::getHotKey: shellLink is null");
    }
    union {
        HotKey out;
        // The address of the keyboard shortcut. The virtual key code is in the low-order byte,
        //  and the modifier flags are in the high-order byte.
        WORD in;
    } hotKey;
    auto res = shellLink->GetHotkey(&hotKey.in);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::getHotKey: Failed to get the hot key");
    }
    return hotKey.out;
}
ShellLinkFile& ShellLinkFile::setHotKey(const HotKey& hotKey) {
    if (!shellLink) {
        throw std::exception("ShellLinkFile::setHotKey: shellLink is null");
    }
    union {
        HotKey in;
        // The address of the keyboard shortcut. The virtual key code is in the low-order byte,
        //  and the modifier flags are in the high-order byte.
        WORD out;
    } hotKey1;
    hotKey1.in = hotKey;
    auto res = shellLink->SetHotkey(hotKey1.out);
    if (res != S_OK) {
        throw std::exception("ShellLinkFile::setHotKey: Failed to set the hot key");
    }
    return *this;
}