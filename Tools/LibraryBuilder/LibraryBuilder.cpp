#include <iostream>
#include "ShlObj.h"
#include <filesystem>
#include <cstdlib>
using namespace std;

string wstr2str(wstring wstr) {
    auto  len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, NULL, NULL);
    buffer[len] = '\0';

    string result = string(buffer);
    delete[] buffer;
    return result;
}

string ChooseFolder()
{
    TCHAR szBuffer[MAX_PATH] = { 0 };

    BROWSEINFO bi;
    ZeroMemory(&bi, sizeof(BROWSEINFO));
    bi.hwndOwner = NULL;
    bi.pszDisplayName = szBuffer;
    bi.lpszTitle = L"Choose a folder contains bedrock_server.exe and .pdb\n请选择一个包含bedrock_server.exe和.pdb的文件夹";
    bi.ulFlags = BIF_RETURNFSANCESTORS;

    LPITEMIDLIST idl = SHBrowseForFolder(&bi);
    if (idl == NULL)
    {
        return "";
    }
    SHGetPathFromIDList(idl, szBuffer);
    return wstr2str(szBuffer);
}

void ErrorExit(int code)
{
    system("pause");
    exit(code);
}

int main(int argc, char **argv)
{
    //Welcome
    cout << "\n";
    cout << "  /////////////////////////////////////////////////////\n";
    cout << "  //                                                 //\n";
    cout << "  //         LiteLoader Dev Library Builder          //\n";
    cout << "  //                                                 //\n";
    cout << "  /////////////////////////////////////////////////////\n";
    cout << "\n---Start Processing..." << endl;

    string bdsPath;
    string generatedPath = "../LiteLoader/Lib";

    if (argc == 1 || ((argc == 3 || argc == 4) && string(argv[1]) == "-o"))
    {
        if(argc >= 3)
            generatedPath = string(argv[2]);
        if (argc == 4)
            bdsPath = string(argv[3]);
        else
        {
            MessageBox(NULL, L"Extra static library is needed to finish this compile.\n"
                             "You need to choose a folder contains bedrock_server.exe and bedrock_server.pdb next\n\n"
                             "需要额外的静态库来完成编译。接下来请需要选择一个含有bedrock_server.exe和bedrock_server.pdb文件的目录",
                       L"More action needed", MB_OK | MB_ICONINFORMATION);

            // Choose Folder
            bdsPath = ChooseFolder();
        }
    }
    else if (argc == 2)
        bdsPath = string(argv[1]);

    // Check Valid
    if (bdsPath.empty())
    {
        MessageBox(NULL, L"You haven't choose a target, or the compile cannot continue!\n"
            "你必须选择一个目录，否则编译将无法继续！", L"Error", MB_OK | MB_ICONERROR);
        cout << "\n**** [Error]\n"
            "**** You must choose a folder for process!" << endl;
        ErrorExit(-1);
    }
    //else if (!filesystem::exists(bdsPath + "/bedrock_server.exe"))
    //{
    //    MessageBox(NULL, L"Wrong target directory! bedrock_server.exe no found\n"
    //        "你选择的目录错误！未找到bedrock_server.exe", L"Error", MB_OK | MB_ICONERROR);
    //    cout << "\n**** [Error]\n"
    //        "**** You must choose a folder contains *bedrock_server.exe*!" << endl;
    //    ErrorExit(-2);
    //}
    else if (!filesystem::exists(bdsPath + "/bedrock_server.pdb"))
    {
        MessageBox(NULL, L"Wrong target directory! bedrock_server.pdb no found\n"
            "你选择的目录错误！未找到bedrock_server.pdb", L"Error", MB_OK | MB_ICONERROR);
        cout << "\n**** [Error]\n"
            "**** You must choose a folder contains *bedrock_server.pdb*!" << endl;
        ErrorExit(-3);
    }
    
    // Copy files
    error_code ec;
    filesystem::remove_all("temp", ec);
    filesystem::create_directory("temp", ec);

    filesystem::copy_file("./SymDB2.exe", "temp/SymDB2.exe", filesystem::copy_options::overwrite_existing, ec);
    filesystem::copy_file(bdsPath + "/bedrock_server.exe", "temp/bedrock_server.exe", filesystem::copy_options::overwrite_existing, ec);
    filesystem::copy_file(bdsPath + "/bedrock_server.pdb", "temp/bedrock_server.pdb", filesystem::copy_options::overwrite_existing, ec);

    //Running process
    cout << "\n----Running SymDB2..." << endl;
    auto parentDir = filesystem::current_path();
    filesystem::current_path(parentDir.u8string() + "/temp");
    system("SymDB2.exe -def -noMod -noSymdb -noPause -keepOri");
    filesystem::current_path(parentDir);

    cout << "\n---- Running LLVM-DLLTool..." << endl;
    system(R"( llvm-dlltool-msys2\llvm-dlltool.exe -m i386:x86-64 -d "temp\bedrock_server_api.def" -l "temp\bedrock_server_api.lib" )");
    system(R"( llvm-dlltool-msys2\llvm-dlltool.exe -m i386:x86-64 -d "temp\bedrock_server_var.def" -l "temp\bedrock_server_var.lib" )");

    // Check valid
    if (!filesystem::exists("temp/bedrock_server_api.lib"))
    {
        MessageBox(NULL, L"Fail to generate API static library!\n"
            "API静态库文件生成失败！", L"Error", MB_OK | MB_ICONERROR);
        cout << "\n**** [Error]\n"
            "**** Fail to generate API static library!" << endl;
        ErrorExit(-4);
    }
    else if (!filesystem::exists("temp/bedrock_server_var.lib"))
    {
        MessageBox(NULL, L"Fail to generate VAR static library!\n"
            "VAR静态库文件生成失败！", L"Error", MB_OK | MB_ICONERROR);
        cout << "\n**** [Error]\n"
            "**** Fail to generate VAR static library!" << endl;
        ErrorExit(-5);
    }

    // Copy files
    filesystem::create_directories(generatedPath);
    filesystem::copy_file("temp/bedrock_server_api.lib", generatedPath + "/bedrock_server_api.lib", filesystem::copy_options::overwrite_existing, ec);
    filesystem::copy_file("temp/bedrock_server_var.lib", generatedPath + "/bedrock_server_var.lib", filesystem::copy_options::overwrite_existing, ec);

    // Cleanup
    filesystem::remove_all("temp", ec);

    cout << "\n---- [Success]" << endl;
    cout << "---- Everything is OK." << endl;
    Sleep(3000);
    return 0;
}