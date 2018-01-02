# winapi-learn
* [Win32システムサービスプログラミング](https://www.seshop.com/product/detail/2630)という本を読んでWindows APIについて勉強する
* サンプルコードをコンパイルしてできる実行ファイルをCuckoo Sandboxに投げたらどんなAPIログが出力されるのか見てみたくなった

## Sandbox実行環境
* Win7 Pro 64bit 日本語版
  * User名: user
  * PC名: user-PC
  * IP Addr: 192.168.122.2
  * 基本的に初期設定
* Cuckoo Sandbox 2.0.5

## 内容
* jsonファイル：cuckooのログ
* cppファイル：ソースコード
* exeファイル：ソースコードをコンパイルしたもの

## 備考
* 読んでいる本がWin98/2k向けなので、サンプルコードがWin7/10でも動作するように適宜変更する
