# Commit格式

## 三原则

在提交commit时，您需要遵循以下原则:
- 仅使用英语(Only English)
- 首字母大写
- 详细的说明，而不是使用`Update`之类的单词描述

## 向beta分支提交commit

如果这个修改只需要您自己一个人完成，请先将LL主仓库fork至您的个人账户，并在您的本地存储库中将您的fork仓库添加到远程存储库，做出修改并提交commit(不需要遵循三原则)后，向主仓库的beta分支提交pull request，经过code review后将您的pull request通过squash的方式merge到beta分支(如果您尚未拥有主仓库的write权限，请在开发群内提醒其他开发者review)

如果这个修改需要多人协作，请在Git/Visual Studio/VSCode/Clion中从beta创建一个新的分支，命名方式为: `module/change`  
例如: `docs/update-cpp-docs`

## 将beta分支合并到main分支

提交一个将beta合并到main的pull request，并使用直接merge的方式合并分支(不是rebase/squash)