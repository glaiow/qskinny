#include "TextInput.h"

TextInput::TextInput( QQuickItem* parent )
    : QQuickTextInput( parent )
{

}

TextInput::~TextInput()
{

}

void TextInput::inputMethodEvent(QInputMethodEvent *event)
{
    QQuickTextInput::inputMethodEvent(event);
}
