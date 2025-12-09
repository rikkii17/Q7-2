情報科学の課題（Q7-2）
githublink:



1.ファイル構成
    main.c:mainプログラムファイル
    config.h,config.c:プログラム内で使用するすべての構造体、定数,グローバル変数を定義
    app.h,app.c:main内で呼び出されるアプリケーション（登録システム、表示システムなど）を実装(Userが直接的に使用するアプリケーション)
    helper.h,helper.c:main.c,app.cにて使用する自作関数を実装
    system_app.h,system_app,c:main.cにて使用されるバックエンドシステムアプリケーションを実装（input_data_fromFileなど）

    CMakeLists.txt:このコードはCMakeによってビルドすることが可能となっている。プロジェクトのビルド環境を設定するためのファイル

    change_program_list.txt:課題コードと変更した点を列挙
    README.md:プロジェクト全体の説明などを記載

2.ビルド構成
    今回の構成としてCMakeを利用することができる。
    ビルド環境はrootディレクトリのCMakeList.txtに記載。