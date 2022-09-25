#pragma once
#include "llapi/Global.h"
#include <windef.h>

struct IShellLinkW;
struct IPersistFile;

class ShellLinkFile {

    IShellLinkW* shellLink = nullptr;
    IPersistFile* presistFile = nullptr;
    std::wstring lnkPath;

    void _Init();

public:
    /**
     * @brief The HotKey struct
     *
     * @see  https://docs.microsoft.com/en-us/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishelllinkw-gethotkey#parameters
     * @note The modifier flags(mod) can be a combination of the following values:
     *        HOTKEYF_ALT, HOTKEYF_CONTROL, HOTKEYF_EXT, HOTKEYF_SHIFT.
     */
    struct HotKey {
        char vk;  // Low
        char mod; // High
    };

    /**
     * @brief Init (and load) a shell link file.
     *
     * @param path  The path to the file(optional).
     *              If `path` is empty, the file will not be loaded.
     */
    LIAPI ShellLinkFile(const std::string& path);
    /**
     * @brief Init (and load) a shell link file.
     *
     * @param path  The path to the file(optional).
     *              If `path` is empty, the file will not be loaded.
     */
    LIAPI ShellLinkFile(const std::wstring& path = L"");
    LIAPI ~ShellLinkFile();

    /**
     * @brief Load a shell link(.lnk) file.
     *
     * @param  path  The path to the file
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& load(const std::string& path);
    /**
     * @brief Load a shell link(.lnk) file.
     *
     * @param  path  The path to the file
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& load(const std::wstring& path);

    /**
     * @brief Save the shell link file.
     *
     * @param path  The path where to save the file.
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& save(const std::string& path);
    /**
     * @brief Save the shell link file.
     *
     * @param path  The path where to save the file(optional).
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& save(const std::wstring& path = L"");

    /**
     * @brief Try resloving the shell link file.
     *
     * @param  hwnd   The hwnd
     * @param  flags  The flags
     * @return bool   True if resolved, false otherwise.
     * @see    https://docs.microsoft.com/en-us/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishelllinkw-resolve
     */
    LIAPI bool resolve(HWND hwnd, DWORD flags);

    /**
     * @brief Close the shell link file.
     *
     */
    LIAPI void close();

    /**
     * @brief Get the target path of the shell link file.
     *
     * @return std::string  The path
     */
    LIAPI std::string getPath();
    /**
     * @brief Get the target path of the shell link file.
     *
     * @return std::wstring  The path
     */
    LIAPI std::wstring getPathW();
    /**
     * @brief Set the target path of the shell link file.
     *
     * @param path  The path
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setPath(const std::string& path);
    /**
     * @brief Set the target path of the shell link file.
     *
     * @param path  The path
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setPath(const std::wstring& path);

    /**
     * @brief Get the working directory of the shell link file.
     *
     * @return std::string  The path
     */
    LIAPI std::string getWorkingDirectory();
    /**
     * @brief Get the working directory of the shell link file.
     *
     * @return std::wstring  The path
     */
    LIAPI std::wstring getWorkingDirectoryW();
    /**
     * @brief Set the working directory of the shell link file.
     *
     * @param path  The path
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setWorkingDirectory(const std::string& path);
    /**
     * @brief Set the working directory of the shell link file.
     *
     * @param path  The path
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setWorkingDirectory(const std::wstring& path);

    /**
     * @brief Get the description of the shell link file.
     *
     * @return std::string  The description
     */
    LIAPI std::string getDescription();
    /**
     * @brief Get the description of the shell link file.
     *
     * @return std::wstring  The description
     */
    LIAPI std::wstring getDescriptionW();
    /**
     * @brief Set the description of the shell link file.
     *
     * @param description  The description
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setDescription(const std::string& description);
    /**
     * @brief Set the description of the shell link file.
     *
     * @param description  The description
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setDescription(const std::wstring& description);

    /**
     * @brief Get the arguments of the shell link file.
     *
     * @return std::string  The arguments
     */
    LIAPI std::string getArguments();
    /**
     * @brief Get the arguments of the shell link file.
     *
     * @return std::wstring  The arguments
     */
    LIAPI std::wstring getArgumentsW();
    /**
     * @brief Set the arguments of the shell link file.
     *
     * @param arguments  The arguments
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setArguments(const std::string& arguments);
    /**
     * @brief Set the arguments of the shell link file.
     *
     * @param arguments  The arguments
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setArguments(const std::wstring& arguments);

    /**
     * @brief Get the icon location of the shell link file.
     *
     * @return std::string  The icon location
     */
    LIAPI std::string getIconLocation();
    /**
     * @brief Get the icon location of the shell link file.
     *
     * @return std::wstring  The icon location
     */
    LIAPI std::wstring getIconLocationW();
    /**
     * @brief Set the icon location of the shell link file.
     *
     * @param iconLocation  The icon location
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setIconLocation(const std::string& iconLocation);
    /**
     * @brief Set the icon location of the shell link file.
     *
     * @param iconLocation  The icon location
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setIconLocation(const std::wstring& iconLocation);

    /**
     * @brief Get the 'ShowCmd' flags of the shell link file.
     *
     * @return int  The 'ShowCmd' flags
     * @see    https://docs.microsoft.com/en-us/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishelllinkw-getshowcmd
     */
    LIAPI int getShowCmd();
    /**
     * @brief Set the 'ShowCmd' flags of the shell link file.
     *
     * @param showCmd  The 'ShowCmd' flags
     * @return ShellLinkFile&  *this
     * @see    https://docs.microsoft.com/en-us/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishelllinkw-getshowcmd
     */
    LIAPI ShellLinkFile& setShowCmd(int showCmd);

    /**
     * @brief Get the hot key of the shell link file.
     *
     * @return ShellLinkFile::HotKey  The hot key
     */
    LIAPI HotKey getHotKey();
    /**
     * @brief Set the hot key of the shell link file.
     *
     * @param hotKey  The hot key
     * @return ShellLinkFile&  *this
     */
    LIAPI ShellLinkFile& setHotKey(const HotKey& hotKey);
};