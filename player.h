  #ifndef PLAYER_H
  #define PLAYER_H

  #include <QWidget>
  #include <QMediaPlayer>

  class QAbstractItemView;
  class QLabel;
  class QMediaPlayer;
  class QModelIndex;
  class QPushButton;
  class QSlider;

  class Player : public QWidget
  {
      Q_OBJECT

  public:
      Player(QWidget *parent = 0);
      ~Player();

      bool isPlayerAvailable() const;

  signals:
      void fullScreenChanged(bool fullScreen);

  private slots:
      void open();
      void durationChanged(qint64 duration);
      void positionChanged(qint64 progress);
      void metaDataChanged();

      void seek(int seconds);
      void jump(const QModelIndex &index);
      void playlistPositionChanged(int);

      void statusChanged(QMediaPlayer::MediaStatus status);
      void bufferingProgress(int progress);

      void displayErrorMessage();

  private:
      void setTrackInfo(const QString &info);
      void setStatusInfo(const QString &info);
      void handleCursor(QMediaPlayer::MediaStatus status);
      void updateDurationInfo(qint64 currentInfo);

      QMediaPlayer *player;
      QMediaPlaylist *playlist;
      VideoWidget *videoWidget;
      QLabel *coverLabel;
      QSlider *slider;
      QLabel *labelDuration;
      QPushButton *fullScreenButton;
  #ifndef PLAYER_NO_COLOROPTIONS
      QPushButton *colorButton;
      QDialog *colorDialog;
  #endif

      QLabel *labelHistogram;
      HistogramWidget *histogram;
      QVideoProbe *probe;

      PlaylistModel *playlistModel;
      QAbstractItemView *playlistView;
      QString trackInfo;
      QString statusInfo;
      qint64 duration;
  };

  #endif // PLAYER_H