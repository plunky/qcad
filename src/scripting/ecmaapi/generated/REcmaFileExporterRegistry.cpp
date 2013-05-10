// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaFileExporterRegistry.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RFileExporter.h"
            
                #include "RFileExporterFactory.h"
            
                #include "RMessageHandler.h"
            
                #include "RProgressHandler.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaFileExporterRegistry::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFileExporterRegistry*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RFileExporterRegistry*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, registerFileExporter, "registerFileExporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, unregisterFileExporter, "unregisterFileExporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFileExporter, "getFileExporter");
            
            REcmaHelper::registerFunction(&engine, &ctor, getFilterStrings, "getFilterStrings");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFileExporterRegistry",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFileExporterRegistry::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileExporterRegistry(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RFileExporterRegistry
                    * cppResult =
                    new
                    RFileExporterRegistry
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileExporterRegistry(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaFileExporterRegistry::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFileExporterRegistry"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFileExporterRegistry::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFileExporterRegistry::registerFileExporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporterRegistry::registerFileExporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporterRegistry::registerFileExporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RFileExporterFactory * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RFileExporterFactory * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RFileExporterFactory >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RFileExporterRegistry: Argument 0 is not of type RFileExporterFactory *RFileExporterFactory *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RFileExporterRegistry::
       registerFileExporter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporterRegistry.registerFileExporter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporterRegistry::registerFileExporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileExporterRegistry::unregisterFileExporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporterRegistry::unregisterFileExporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporterRegistry::unregisterFileExporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RFileExporterFactory * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RFileExporterFactory * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RFileExporterFactory >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RFileExporterRegistry: Argument 0 is not of type RFileExporterFactory *RFileExporterFactory *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RFileExporterRegistry::
       unregisterFileExporter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporterRegistry.unregisterFileExporter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporterRegistry::unregisterFileExporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileExporterRegistry::getFileExporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporterRegistry::getFileExporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporterRegistry::getFileExporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileExporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
    // end of arguments

    // call C++ function:
    // return type 'RFileExporter *'
    RFileExporter * cppResult =
        RFileExporterRegistry::
       getFileExporter(a0
        ,
    a1
        ,
    a2);
        // return type: RFileExporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RMessageHandler * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileExporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
                    // argument is pointer
                    RMessageHandler * a3 = NULL;

                    a3 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(3)
                        );
                    
                    if (a3==NULL && 
                        !context->argument(3).isNull()) {
                        return REcmaHelper::throwError("RFileExporterRegistry: Argument 3 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileExporter *'
    RFileExporter * cppResult =
        RFileExporterRegistry::
       getFileExporter(a0
        ,
    a1
        ,
    a2
        ,
    a3);
        // return type: RFileExporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    5 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocument */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RMessageHandler * */
     && (
            context->argument(4).isVariant() || 
            context->argument(4).isQObject() || 
            context->argument(4).isNull()
        ) /* type: RProgressHandler * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap2 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RFileExporterRegistry: Argument 2 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a2 = *ap2;
                
                    // argument is pointer
                    RMessageHandler * a3 = NULL;

                    a3 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(3)
                        );
                    
                    if (a3==NULL && 
                        !context->argument(3).isNull()) {
                        return REcmaHelper::throwError("RFileExporterRegistry: Argument 3 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
                    // argument is pointer
                    RProgressHandler * a4 = NULL;

                    a4 = 
                        REcmaHelper::scriptValueTo<RProgressHandler >(
                            context->argument(4)
                        );
                    
                    if (a4==NULL && 
                        !context->argument(4).isNull()) {
                        return REcmaHelper::throwError("RFileExporterRegistry: Argument 4 is not of type RProgressHandler *RProgressHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileExporter *'
    RFileExporter * cppResult =
        RFileExporterRegistry::
       getFileExporter(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4);
        // return type: RFileExporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporterRegistry.getFileExporter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporterRegistry::getFileExporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileExporterRegistry::getFilterStrings
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporterRegistry::getFilterStrings", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporterRegistry::getFilterStrings";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        RFileExporterRegistry::
       getFilterStrings();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporterRegistry.getFilterStrings().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporterRegistry::getFilterStrings", context, engine);
            return result;
        }
         QScriptValue REcmaFileExporterRegistry::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFileExporterRegistry* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFileExporterRegistry(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFileExporterRegistry::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFileExporterRegistry* self = getSelf("RFileExporterRegistry", context);
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
    RFileExporterRegistry* REcmaFileExporterRegistry::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileExporterRegistry* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileExporterRegistry >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileExporterRegistry.%1(): "
                        "This object is not a RFileExporterRegistry").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFileExporterRegistry* REcmaFileExporterRegistry::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileExporterRegistry* selfBase = getSelf(fName, context);
                RFileExporterRegistry* self = dynamic_cast<RFileExporterRegistry*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFileExporterRegistry >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileExporterRegistry.%1(): "
                    "This object is not a RFileExporterRegistry").arg(fName),
                    context);
            }

            return self;
            


        }
        