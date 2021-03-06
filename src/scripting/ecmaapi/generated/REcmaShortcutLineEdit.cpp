// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaShortcutLineEdit.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaShortcutLineEdit::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RShortcutLineEdit*) 0)));
        protoCreated = true;
    }

    
        // primary base class QLineEdit:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QLineEdit*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QLineEdit
        REcmaHelper::registerFunction(&engine, proto, getQLineEdit, "getQLineEdit");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, clear, "clear");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RShortcutLineEdit*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RShortcutLineEdit*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RShortcutLineEdit",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaShortcutLineEdit::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RShortcutLineEdit(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RShortcutLineEdit
                    * cppResult =
                    new
                    RShortcutLineEdit
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RShortcutLineEdit(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaShortcutLineEdit::getQLineEdit(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QLineEdit* cppResult =
                    qscriptvalue_cast<RShortcutLineEdit*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaShortcutLineEdit::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RShortcutLineEdit"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaShortcutLineEdit::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QLineEdit");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaShortcutLineEdit::clear
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaShortcutLineEdit::clear", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaShortcutLineEdit::clear";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RShortcutLineEdit* self = 
                        getSelf("clear", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clear();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RShortcutLineEdit.clear().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaShortcutLineEdit::clear", context, engine);
            return result;
        }
         QScriptValue REcmaShortcutLineEdit::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RShortcutLineEdit* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RShortcutLineEdit(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaShortcutLineEdit::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RShortcutLineEdit* self = getSelf("RShortcutLineEdit", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RShortcutLineEdit* REcmaShortcutLineEdit::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RShortcutLineEdit* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RShortcutLineEdit >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RShortcutLineEdit.%1(): "
                        "This object is not a RShortcutLineEdit").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RShortcutLineEdit* REcmaShortcutLineEdit::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RShortcutLineEdit* selfBase = getSelf(fName, context);
                RShortcutLineEdit* self = dynamic_cast<RShortcutLineEdit*>(selfBase);
                //return REcmaHelper::scriptValueTo<RShortcutLineEdit >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RShortcutLineEdit.%1(): "
                    "This object is not a RShortcutLineEdit").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RShortcutLineEdit*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RShortcutLineEdit*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RShortcutLineEdit*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    