# git 使用之旅
本篇是在windows下用tortoiseGit进行操作。

### git 克隆项目
一般用命令
```
git clone xxx.git
```

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e3b644a92218.png)
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e3cd3300eb41.png)

如果是本地一个空项目，新建文件夹

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e3df2f620a7c.png)

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e3e2f4af2dda.png)
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e3e6f42687e9.png)

### git 提交
把所添加的文件和修改的文件提交到本地当前分支。

添加文件
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e40ac4705392.png)

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e414ab96acac.png)

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e43611540223.png)

### 修改了错误的文件需要撤回怎么搞
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e44bfe360ec9.png)

### 创建本地分支

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e45723e02f26.png)

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e4623dcad94a.png)

创建标签，一般是发布版本的时候打标签

### 查看日志
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e47672a59f73.png)
这里面可以切换到某分支，创建某分支

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e4822ebeda4f.png)

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e48e2334ea8d.png)
这里面有本地分支和远程分支，方便管理。

### 推送到远程分支
何谓远程分支 
-->远程仓库 -->github gitee.com 和服务器的gitlab

自己的写的开源代码:自然是想一套源码 能够在多个仓库同时推送。
这时候怎么操作呢。
在所需要的这套源码-->新建仓库-->gitlab + github + github

1.按照先本地服务器，再码云，最后github

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e4ea99523010.png)

2.推送所有分支

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e501c5b60d1c.png)

3.选择跟踪分支，一般选本地服务器或者gitee
因为gitee下载速度快，
![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e541940ea635.png)

### 一般开源源码管理
一般咱们用第三方库的时候，也需要保证这个源码能够正常git pull，咱们要想在这个源码基础上进行开发呢，就需要创建分支进行。
1.git pull下来之后呢，首先咱们需要添加这个源码的子模块

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e5ab6abbb7c4.png)

2.选择路径和git

![](http://doc.feijianshen.com/uploads/201810/cplusplussz/attach_1560e5bab04dc45c.png)

3.创建分支，提交分支

4.在根目录提交git就可以了

其余使用方法参考百度，多练习，基本就会了。
