#ifndef CSM_PREFS_COLOURSETTING_H
#define CSM_PREFS_COLOURSETTING_H

#include "setting.hpp"

#include <QColor>

namespace CSMPrefs
{
    class ColourSetting : public Setting
    {
            Q_OBJECT

            std::string mTooltip;
            QColor mDefault;

        public:

            ColourSetting (Category *parent, Settings::Manager *values,
                QMutex *mutex, const std::string& key, const std::string& label,
                QColor default_);

            ColourSetting& setTooltip (const std::string& tooltip);

            /// Return label, input widget.
            virtual std::pair<QWidget *, QWidget *> makeWidgets (QWidget *parent);

        private slots:

            void valueChanged();
    };
}

#endif
